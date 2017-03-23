using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpNestedLibs
{
    class Program
    {
        [DllImport("LibraryTwo")]
        static extern int getNumberTwo();
        static void Main(string[] args)
        {
            Console.WriteLine("Trying to use nested libs.");
            Console.WriteLine("From LibraryTwo: " + getNumberTwo());
            Console.ReadKey();
        }
    }
}
