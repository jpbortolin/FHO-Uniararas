namespace Biblioteca.Interfaces
{
    public interface IDigital
    {
        public void Download();

        public decimal RecuperarTamanho();

        public bool AtualizarTamanho();
    }
}
