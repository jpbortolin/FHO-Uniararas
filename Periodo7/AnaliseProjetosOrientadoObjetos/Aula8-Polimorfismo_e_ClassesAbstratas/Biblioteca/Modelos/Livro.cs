using Biblioteca.Interfaces;

namespace Biblioteca.Modelos
{
    public class Livro : Material, ILeitura
    {
        //ctor
        public Livro(string titulo, string autor, int anoPublicacao)
            : base(titulo, autor, anoPublicacao)
        {

        }

        public override void Cobrar()
        {
            Console.WriteLine($"Cobrando uma taxa do livro...");
        }

        //method
        public override void ExibirInfo()
        {
            base.ExibirInfo();
        }

        public void Leitura()
        {
            Console.WriteLine("Lendo o livro...\n");
        }
    }
}