namespace ExemploHeranca
{
    //Classe genérica que servirá como base para classes especialistas
    internal class Material
    {
        //Propriedades
        protected string Titulo { get; set; }
        protected string Autor { get; set; }


        //Construtor
        public Material(string titulo, string autor)
        {
            this.Titulo = titulo;
            this.Autor = autor;
        }

        //Métodos
        protected void VisualizarInfo()
        {
            Console.WriteLine($"Título: {this.Titulo} \nAutor: {this.Autor}");
        }
    }
}
