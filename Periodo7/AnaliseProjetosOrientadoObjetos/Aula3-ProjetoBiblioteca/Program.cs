using System.Runtime.Intrinsics.Arm;

namespace ConsoleApp1
{
    public class Program
    {
        //Criando uma coleção de livros
        //Como se fosse o banco de dados
        static List<Livro> Livros = new List<Livro>();

        static void Cadastrar()
        {
            Livro livro = new Livro();

            Console.WriteLine("Nome:");
            livro.Nome = Console.ReadLine();
            Console.WriteLine("Autor:");
            livro.Autor = Console.ReadLine();
            Console.WriteLine("Ano:");
            livro.Ano = int.Parse(Console.ReadLine());
            livro.Disponivel = true;

            //Salvando na coleção
            Livros.Add(livro);
        }

        static void Emprestar()
        {
            Console.WriteLine("Informe o código do livro para empréstimo:");
            int id = int.Parse(Console.ReadLine());

            //Buscando na lista
            foreach (Livro l in Livros)
            {
                if (l.Id == id)
                {
                    l.Emprestar();
                    Console.Write("Ok!");
                    return;
                }
            }
        }

        static void Devolver()
        {
            Console.WriteLine("Informe o código do livro para devolução:");
            int id = int.Parse(Console.ReadLine());

            //Buscando na lista
            foreach (Livro l in Livros)
            {
                if (l.Id == id)
                {
                    l.Devolver();
                    Console.Write("Ok!");
                    return;
                    
                }
            }
        }

        static void Main(string[] args)
        {

            int opc = 0;
            do
            {
                Console.WriteLine("Digite 0: Cadastrar\n" +
                                  "Digite 1: Visualizar\n" +
                                  "Digite 2: Empréstimo\n" +
                                  "Digite 3: Devolver\n" +
                                  "Digite 4: Sair");

                opc = int.Parse(Console.ReadLine());

                switch (opc)
                {
                    case 0:
                        Cadastrar();
                        break;
                    case 1:
                        //Exibindo todos os livros
                        foreach (Livro l in Livros)
                            Console.WriteLine(l.ToString());
                        break;
                    case 2:
                        Emprestar();
                        break;
                    case 3:
                        Devolver();
                        break;
                    default:
                        return;
                }
            }
            while (true);

        }
    }
}