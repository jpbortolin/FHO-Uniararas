using Biblioteca.Interfaces;

namespace Biblioteca.Modelos
{
    public class Artigo : Material, ILeitura
    {
        //props
        private string ISBN { get; set; } = string.Empty;

        //ctor
        public Artigo(string titulo, string autor, int anoPublicacao) 
            : base(titulo, autor, anoPublicacao)
        {

        }

        public Artigo(string titulo, string autor, int anoPublicacao, string isbn)
            : this(titulo, autor, anoPublicacao)
        {
            this.ISBN = isbn;
        }

        //method
        public void Publicar()
        {
            //Simulando o ato de publicar o artigo - recebendo um ISBN
            this.ISBN = "ISBN8721532";
            Console.WriteLine("Artigo Publicado!");
        }

        //Como a classe filha precisa exibir mais informações, vamos sobrescrever o método ExibirInfo
        public override void ExibirInfo()
        {
            base.ExibirInfo();
            Console.WriteLine($"ISBN: {ISBN}");
        }

        public override void Cobrar()
        {
            Console.WriteLine($"Cobrando uma taxa do artigo...");
        }

        public void Leitura()
        {
            Console.WriteLine("Lendo o artigo...\n");
        }
    }
}