namespace Biblioteca.Modelos
{
    public abstract class Material
    {
        //props
        protected string Titulo { get; set; }
        protected string Autor { get; set; }
        protected int AnoPublicacao { get; set; }

        //ctor
        public Material(string titulo, string autor, int anoPublicacao)
        {
            this.Titulo = titulo;
            this.Autor = autor;
            this.AnoPublicacao = anoPublicacao;
        }

        //method
        //Vamos permitir que classes filhas sobrescrevam esse método
        public virtual void ExibirInfo()
        {
            Console.WriteLine($"Titulo: {Titulo}\nAutor: {Autor}\nAno de Publicação: {AnoPublicacao}");
        }

        //Método abstrato - força a implementação nas classes herdeiras/filhas
        public abstract void Cobrar();

    }
}
