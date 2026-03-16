namespace ConsoleApp1
{
    public class Livro
    {
        //Id global que todo objeto poderá acessar
        static int _id = 0;

        //atributos privados por padrão
        string nome;
        //string autor;
        //int ano;
        //bool disponivel;

        //criando propriedades - ssas podem ser públicas pois terão get e set
        //PROPRIEDADES SEMPRE SERÃO COM A 1ª LETRA MAIÚSCULA
        public string Nome
        {
            get { return nome; }
            set { nome = value; }
        }

        public string Autor { get; set; }

        public int Ano { get; set; }

        public bool Disponivel { get; set; }

        //Estamos inicializando a propriedade!
        public int Id { get; private set; } = _id++;

        public string ToString()
        {
            return $"Id: {Id}\n" +
                   $"Nome: {Nome}\n" +
                   $"Autor: {Autor}\n" +
                   $"Ano: {Ano}\n" +
                   $"Disponibilidade: {Disponivel}";
        }

        public bool Emprestar()
        {
            if (Disponivel)
            {
                Disponivel = false;
            }
            return true;
        }

        public bool Devolver()
        {
            if (!Disponivel)
            {
                Disponivel = true;
            }
            return true;

        }

    }
}