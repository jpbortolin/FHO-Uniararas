using Biblioteca.Interfaces;
using Biblioteca.Modelos;

namespace Biblioteca
{
    public class Program
    {
        static void Main(string[] args)
        {
            //Instanciando objetos
            Material ebook = new Ebook("Ebook do Sabor", "Ancelotti", 2026, 1024m);
            Material artigo = new Artigo("Artigo do Conhecimento", "Acconcia M.", 1999, "ISBN0011999");
            Material audiobook = new AudioBook("Audio da Alegria", "Neymar", 2026, 19.5m);
            Material livro = new Livro("Bibliografia Ayrton Senna", "Galisteu", 2002);

            List<Material> materials = new()
            {
                ebook, 
                artigo, 
                audiobook, 
                livro
            };

            ILeitura livroLeitura = new Livro("Dom Casmurro", "Machado de Assis", 1800);
            ILeitura ebookLeitura = new Ebook("Dom Casmurro", "Machado de Assis", 2020, 1024m);
            IAudio audiobook2 = new AudioBook("Dom Casmurro", "Machado de Assis", 2026, 450m);

            //Guardando materiais que são apenas de leitura
            List<ILeitura> materiaisLeitura = [livroLeitura, ebookLeitura];

            //Guardando materiais que são apenas para ouvir
            List<IAudio> materiaisOuvir = [audiobook2];

            //Polimorfismo!
            foreach (Material material in materials) 
            {
                material.ExibirInfo();

                if (material is Artigo a)
                {
                    //Downcasting
                    a.Publicar();

                }

                //Tratando um objeto material como sendo "audível"
                //Portanto, podemos referenciar esse objeto através da interface!
                if (material is IAudio audio)
                {
                    audio.Ouvir();
                }

                if (material is ILeitura leitura)
                {
                    leitura.Leitura();
                }
            }

            Console.WriteLine("---------- Acessos via interface ----------");

            //Acessando apenas materiais do tipo leitura
            foreach (var mLeitura in materiaisLeitura)
            {
                mLeitura.Leitura();
                
                if (mLeitura is Ebook e)
                {
                    e.ExibirInfo();
                }
                else if (mLeitura is Livro l)
                {
                    l.ExibirInfo();
                }
            }

            IDigital ebookDig = new Ebook("Ebook Digital C#", "Renato Cagnin", 2026, 1202m);
            IDigital audiobookDig = new AudioBook("Audiobook C#", "Renato Cagnin", 2026, 500);

            List<IDigital> digitais = new()
            {
                ebookDig,
                audiobookDig
            };

            //Listagem de materiais digitais
            foreach (var digital in digitais)
            {
                //Ações em comum de materiais digitais
                digital.Download(); //Polimorfismo!!
            }
        }
    }
}