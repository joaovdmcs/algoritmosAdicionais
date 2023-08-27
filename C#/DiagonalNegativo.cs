using System;
using System.Globalization;

public class DiagonalNegativo{
	static void Main(string[] args){
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		int n;
		Console.Write("Dimensao da matriz: ");
		n = int.Parse(Console.ReadLine());
		
		int[,] m = new int[n,n];
		int counter = 0;
		for(int i = 0; i < n ; i++) {
			for(int j = 0; j < n; j++){
			Console.Write("Elemento [" + i + "," + j + "]: ");
			m[i,j] = int.Parse(Console.ReadLine());
			if(m[i,j]<0) counter++;
			}
		}
		
		Console.WriteLine("DIAGONAL PRINCIPAL:");
		for(int k = 0; k<n; k++){
			Console.Write(m[k,k].ToString() + " ");
		}
		Console.WriteLine();
		
		Console.Write("QUANTIDADE DE NEGATIVOS = " + counter.ToString());
	}
}