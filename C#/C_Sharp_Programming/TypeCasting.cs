using System;


namespace C_Sharp_Programming
{
    internal class TypeCasting
    {
        public static void ImplicitCasting()
        {
            // Type Casting : Converting one data type to another

            // Implicit Casting : 
            // 1. Automatically done by compiller
            // 2. Small size datatype is stored in relatively large sized datatype

            int x = 15; // 4 bytes
            Console.WriteLine(x);
            double d1 = x; // 8 bytes
            Console.WriteLine(d1);

            // Explicit Casting : 
            // 1. Has to be done by user
            // 2. Large size datatype is stored in relatively small sized datatype

            d1 = 25.256;
            Console.WriteLine(d1);
            int y = (int)d1;
            Console.WriteLine(y);

        }
    }
}
