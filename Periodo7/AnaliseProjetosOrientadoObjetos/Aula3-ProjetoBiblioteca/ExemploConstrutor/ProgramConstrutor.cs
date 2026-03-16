namespace Exemplo_Construtor2
{
    public class Program
    {
        static void Main(string[] args)
        {
            //Criando um objeto
            Livro novoLivro = new Livro("Senhor dos Anéis", "Tolkien");

            Console.WriteLine(novoLivro.Nome);
            Console.WriteLine(novoLivro.Autor);
        }
    }
}
