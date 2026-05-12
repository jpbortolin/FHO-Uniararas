namespace ExemploHeranca
{
    //Classe herdadeira da classe Material
    internal class Ebook : Material
    {
        //Propriedades
        private float TamanhoBytes { get; set; }

        public Ebook(string titulo, string autor, float tamanho) : base(titulo, autor)
        {
            this.TamanhoBytes = tamanho;
        }

        //Criando método para exibir informações
        public void Visualizar()
        {
            //Chamando o método da classe base
            base.VisualizarInfo();
            Console.WriteLine($"Tamanho Bytes: {this.TamanhoBytes}");
        }
    }
}