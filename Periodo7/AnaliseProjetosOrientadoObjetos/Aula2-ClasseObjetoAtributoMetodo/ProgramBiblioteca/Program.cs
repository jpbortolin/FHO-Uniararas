namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Aqui vamos manipular a classe Livro
            //através de instâncias desse classe (objeto)

            Livro livro1 = new Livro();

            //Acessando os atributos
            //e manipulando os atributos
            livro1.Titulo = "1984";
            livro1.Ano = 1984;
            livro1.Autor = "George Orwell";
            livro1.Disponivel = true;

            //Resgatando os valores dos atributos
            livro1.ExibirInformacoes();

            Livro livro2 = new Livro();

            //Definindo as informações do novo livro
            livro2.Titulo = "Diário de um Banana";
            livro2.Ano = 2012;
            livro2.Autor = "Bananão";
            livro2.Disponivel = true;
            livro2.

            livro2.ExibirInformacoes();
        }
    }
}
