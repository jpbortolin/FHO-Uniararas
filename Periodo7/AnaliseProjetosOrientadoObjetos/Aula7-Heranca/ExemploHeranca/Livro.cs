namespace ExemploHeranca
{
    //Classe especialista - deve herdar da classe base (Material)
    internal class Livro : Material
    {
        //Propriedades
        private int QtdadeCopias { get; set; }

        public Livro(string titulo, string autor, int qtdcopias) : base( titulo, autor)
        {
            this.QtdadeCopias = qtdcopias;
        }

        //Criando método para exibir informações
        public void Visualizar()
        {
            //Chamando o método da classe base
            base.VisualizarInfo();
            Console.WriteLine($"Cópias: {this.QtdadeCopias}");
        }
    }
}
