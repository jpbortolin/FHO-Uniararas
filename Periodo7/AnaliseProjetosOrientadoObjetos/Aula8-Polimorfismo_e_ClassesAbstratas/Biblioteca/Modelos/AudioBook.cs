using Biblioteca.Interfaces;

namespace Biblioteca.Modelos
{
    public class AudioBook : Material, IAudio, IDigital
    {
        //props
        private decimal Duracao { get; set; }
        private decimal Tamanho { get; set; }

        //ctor
        public AudioBook(string titulo, string autor, int anoPublicacao, decimal duracao)
            : base(titulo, autor, anoPublicacao)
        {
            this.Duracao = duracao;
        }

        //ExibirInfo sobrescrito
        public override void ExibirInfo()
        {
            base.ExibirInfo();
            Console.WriteLine($"Duração: {Duracao}");
        }

        public override void Cobrar()
        {
            Console.WriteLine($"Cobrando uma taxa do audiobook...");
        }

        public void Ouvir()
        {
            Console.WriteLine("Ouvindo o audiobook...\n");
        }

        public void Download()
        {
            Console.WriteLine("Download do audiobook...");
        }

        public decimal RecuperarTamanho()
        {
            if(Tamanho != 0)
            {
                return this.Tamanho;
            }
            else
            {
                return -99m; //Código de erro
            }
        }

        public bool AtualizarTamanho()
        {
            this.Tamanho = Tamanho;
            return true;
        }
    }
}