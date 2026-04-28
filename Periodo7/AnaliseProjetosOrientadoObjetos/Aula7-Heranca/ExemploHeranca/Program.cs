namespace ExemploHeranca
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Criando um material
            Ebook ebook = new Ebook("APOO I", "M. Acconcia", 1024);
            Livro livro = new Livro("A bíblia dos IoT", "M. Acconcia", 8);

            /*
            //Visualizando as informações
            ebook.Visualizar();
            Console.WriteLine("");
            livro.Visualizar();
            Console.WriteLine("");
            */

            //Comprovando que um ebook e um livro podem ser tratados como um material ("Relação É-um")
            Material ebook2 = new Ebook("A Grande Família", "M. Acconcia", 10240);
            Material livro2 = new Livro("O Alcorão", "M. Acconcia", 9);
            Material ebook3 = new Ebook("O Riquinho", "M. Acconcia", 2048);

            /*
            //Trabalhando com o cast -> downcasting
            ((Ebook)ebook2).Visualizar();
            Console.WriteLine("");
            ((Livro)livro2).Visualizar();
            */

            //Criamos uma lista de material -> Genérica!
            List<Material> materiais = new List<Material>();
            materiais.Add(ebook2);
            materiais.Add(ebook3);
            materiais.Add(ebook);
            materiais.Add(livro);
            materiais.Add(livro2);

            Console.WriteLine("Percorrendo a lista...");

            //Vamos percorrer essa lista e percorrer cada item com o seu tipo específico
            foreach(var material in materiais)
            {
                //Validando qual o tipo específico
                if (material is Ebook)
                {
                    //Casting
                    ((Ebook)material).Visualizar();
                    Console.WriteLine("");
                }
                else if (material is Livro)
                {
                    //Casting
                    ((Livro)material).Visualizar();
                    Console.WriteLine("");
                }
            }

        }
    }
}