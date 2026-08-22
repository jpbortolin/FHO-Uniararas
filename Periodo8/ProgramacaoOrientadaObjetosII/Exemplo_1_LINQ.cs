using System.Net.Http.Headers;

namespace Exemplo_1_LINQ
{
    public class Aluno
    {
        //prop
        public int Codigo { get; set; }
        public string Nome { get; set; }
        public decimal Media { get; set; }

    }

    //Dado uma lista de Alunos,
    //filtrar os alnos que tem notas >= 7.

    public class Program
    {
        static void Main(string[] args)
        {
            //A lista de alunos
            List<Aluno> alunos = new List<Aluno>()
            {
                new Aluno { Codigo = 3, Nome = "João", Media = 8m },
                new Aluno { Codigo = 2, Nome = "Lucas", Media = 6.9m },
                new Aluno { Codigo = 1, Nome = "Rafael", Media = 3m },
                new Aluno { Codigo = 5, Nome = "Marcos", Media = 8.9m },
                new Aluno { Codigo = 4, Nome = "Vinícius", Media = 4m }
            };

            //Filtrando os alunos aprovados
            var alunosAprovados = new List<Aluno>();

            foreach (var aluno in alunos)
            {
                if (aluno.Media >= 7)
                    alunosAprovados.Add(aluno);
            }

            Console.WriteLine("----------- Consulta com Lazy Load ---------");

            //O LINQ tem a inicialização tardia (Lazy Load)
            var alunosApr = alunos.Where(aluno => aluno.Media >= 7m);
            
            //Estamos manipulando a lista original mas isso será refletido na lista alunoApr
            //por conta do Lazy Load
            alunos.Add(new Aluno {Codigo = 6, Nome = "Preguiçoso", Media = 10m } );

            foreach (var aluno in alunosApr)
            {
                //Somente no momento de "capturar" o objeto o nosso filtro where é executado
                Console.WriteLine($"Nome: {aluno.Nome} - Média: {aluno.Media}");
            }

            Console.WriteLine("----------- Consulta com materialização ---------");
            

            //Inicialização imediata (Greedy Load) - Materialização
            var alunosRep = alunos.Where(aluno => aluno.Media < 5m).ToList();

            alunos.Add(new Aluno { Codigo = 7, Nome = "Preguiçoso", Media = 1m });

            foreach (var aluno in alunosRep)
            {
                Console.WriteLine($"Nome: {aluno.Nome} - Média: {aluno.Media}");
            }

            Console.WriteLine("--------------------------------");

            //Sabendo a soma total as médias dos alunos reprovados
            Console.WriteLine($"Soma das médias dos alunos reprovados: {alunosRep.Sum(a => a.Media)}");

            Console.WriteLine("------------ Alunos de Recuperação ----------");

            //Filtrando da lista original quem está de recuperação já ordenado
            var alunosRecuperacao = alunos.Where(a => a.Media >= 3 && a.Media < 5)
                                          .OrderBy(a => a.Nome)
                                          //.OrderByDescending(a => a.Nome) em ordem decrescente
                                          .ToList();

            foreach (var aluno in alunosRecuperacao)
            {
                Console.WriteLine($"Nome: {aluno.Nome} - Media: {aluno.Media}");
            }

            var dicionarioAlunos = new Dictionary<int, Aluno>();

            //Adicionando informações
            dicionarioAlunos.Add(alunos[0].Codigo, alunos[0]);
            dicionarioAlunos.Add(alunos[1].Codigo, alunos[1]);

            //O acesso do dicionário por índice deve respeitar o tipo do índice criado
            //chave (índice) - valor
            Console.WriteLine(dicionarioAlunos[3].Nome);

            foreach(var elemento in dicionarioAlunos) 
            {
                Console.WriteLine($"{elemento.Key} - {elemento.Value.Nome}");
            }

            var dictAlunos = alunos.OrderByDescending(a => a.Codigo)
                                   .ToDictionary(a => a.Codigo);

            foreach (var elemento in dictAlunos)
            {
                Console.WriteLine($"{elemento.Key} - {elemento.Value.Nome} ");
            }
        }
    }
}