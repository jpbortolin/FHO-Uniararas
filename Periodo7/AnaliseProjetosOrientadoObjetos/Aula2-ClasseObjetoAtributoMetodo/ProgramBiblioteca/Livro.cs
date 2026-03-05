namespace ConsoleApp1
{
    internal class Livro
    {
        /*
        Atributos Modo "JAVA" 
        
        private string titulo;
        private string autor;
        private int ano;
        private bool disponivel;
        */

        //Atributos
        public string Titulo { get; set; }
        public string Autor { get; set; }
        public int Ano { get; set; }
        public bool Disponivel { get; set; }

        //Construtores


        /*
        Métodos Modo "JAVA"
        
        public string GetTitulo()
        {
            return titulo;
        }
        
        public void SetTitulo(string Titulo)
        {
            this.titulo = Titulo;
        }
        */

        //Métodos
        public void ExibirInformacoes()
        {
            //Regras para exibir as infos
            Console.WriteLine("Título: " + Titulo);
            Console.WriteLine("Ano: " + Ano);
            Console.WriteLine("Autor: " + Autor);
            Console.Write("Disponibilidade: ");
            this.VerDisponibilidade();
            Console.WriteLine("");
        }

        public void VerDisponibilidade()
        {
            if (this.Disponivel)
            {
                Console.WriteLine("Está disponível");
            }
            else
            {
                Console.WriteLine("Não disponível");
            }
        }

        public void Emprestar()
        {
            if (this.Disponivel)
            {
                Console.WriteLine("O livro será emprestado a você!");
            }
            else
            {
                Console.WriteLine("O livro já foi emprestado");
            }
        }

        public void Devolver()
        {
            if (!this.Disponivel)
            {
                Console.WriteLine("O livro  "
            }
        }

        public void AtualizarDisponibilidade()
        {

        }

    }
}