
using System;

public class Tree {
	public static void Main(String[] args)
	{
		Array_imp obj = new Array_imp();
		obj.Root("A");
		obj.set_Right("C", 0);
		obj.set_Left("D", 1);
		obj.set_Right("E", 1);
		obj.set_Left("F", 2);
		obj.print_Tree();
	}
}

class Array_imp {
	static int root = 0;
	static String[] str = new String[10];

	
	public void Root(String key)
	{
		str[0] = key;
	}

	
	public void set_Left(String key, int root)
	{
		int t = (root * 2) + 1;

		if (str[root] == null) {
			Console.Write("Can't set child at {0}, no parent found\n", t);
		}
		else {
			str[t] = key;
		}
	}

	
	public void set_Right(String key, int root)
	{
		int t = (root * 2) + 2;

		if (str[root] == null) {
			Console.Write("Can't set child at {0}, no parent found\n", t);
		}
		else {
			str[t] = key;
		}
	}

	public void print_Tree()
	{
		for (int i = 0; i < 10; i++) {
			if (str[i] != null)
				Console.Write(str[i]);
			else
				Console.Write("-");
		}
	}
}


