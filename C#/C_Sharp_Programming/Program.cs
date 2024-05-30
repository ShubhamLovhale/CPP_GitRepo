using System;


namespace C_Sharp_Programming // Namespace name is equal to project name (also called as assembly)
{
    internal class Program 
    {
        static void Main(string[] args) // Main func is the entry point for program
        {
            // DataType VariableName = Value --- Variable initialisation
            Console.WriteLine("Please enter 1 num");
            int FirstInt = Convert.ToInt32(Console.ReadLine()); // In C# default value for int variable is 0
            Console.WriteLine("Please enter 2 num");
            int SecndInt = Convert.ToInt32(Console.ReadLine());

            int sum = FirstInt + SecndInt;

            string msg = "The sum is : " + sum;   // In C# Default value for string variable is null
            // The sum is : 110 // String Concatenation
            Console.WriteLine(sum);
            Console.WriteLine(msg);

            TypeCasting.ImplicitCasting();

        }
    }
}
