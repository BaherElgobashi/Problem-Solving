using System.Threading.Channels;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
           string[] parts = Console.ReadLine().Split(' ', StringSplitOptions.RemoveEmptyEntries);


           long a = long.Parse(parts[0]);
           long b = long.Parse(parts[1]);
           long h = long.Parse(parts[2]);

           if( a < b)
            {
                if( h>=a && h< b){
                    System.Console.WriteLine("YES");
                }
                else
                {
                    System.Console.WriteLine("NO");
                }
            }

            else if(a > b)
            {
                if(h>=a || h< b)
                {
                    System.Console.WriteLine("YES");
                }
                 else
                {
                    System.Console.WriteLine("NO");
                }
            }

            else if( a == b)
            {
                
                
                    System.Console.WriteLine("YES");
                
                 
            }
            
           
           

           
            

            

            





        }
    }
}
