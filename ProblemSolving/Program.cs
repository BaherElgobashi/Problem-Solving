using System.Threading.Channels;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
           string[] parts = Console.ReadLine().Split(' ', StringSplitOptions.RemoveEmptyEntries);

           
           

            long x1 = long.Parse(parts[0]);
            long y1 = long.Parse(parts[1]);
            long x2 = long.Parse(parts[2]);
            long y2 = long.Parse(parts[3]);

            long start = Math.Max(x1 , x2);

            long end = Math.Min(y1 , y2);

            if(start <= end)
            {
                System.Console.WriteLine((end - start ) + 1);
            }
            else
            {
                Console.WriteLine(0);
            }
           

           
           
           

           
            

            

            





        }
    }
}
