using Biblioteca.Interfaces;

namespace Biblioteca.Modelos
{
    public class Ebook : Material, ILeitura, IDigital
    {
        //props
        private decimal TamanhoArquivo { get; set; }

        //ctor
        public Ebook(string titulo, string autor, int anoPublicacao, decimal tamanhoArquivo) 
            : base(titulo, autor, anoPublicacao)
        {
            this.TamanhoArquivo = tamanhoArquivo;
        }

        //method
        public override void ExibirInfo()
        {
            base.ExibirInfo();
            Console.WriteLine($"Tamanho do Arquivo: {TamanhoArquivo}");
        }

        public override void Cobrar()
        {
            Console.WriteLine($"Cobrando uma taxa do ebook...");
        }

        public void Leitura()
        {
            Console.WriteLine("Lendo o ebook...\n");
        }

        public void Download()
        {
            Console.WriteLine("Download do ebook...");
        }

        public decimal RecuperarTamanho()
        {
            return this.TamanhoArquivo;
        }

        public bool AtualizarTamanho()
        {
            this.TamanhoArquivo = TamanhoArquivo;
            return true;
        }
    }
}