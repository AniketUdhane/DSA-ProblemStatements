package recursion;
import java.io.*;
import java.math.*;
import java.util.*;
// tower of hanoi
public class towerOfHanoi {
	
	public static void move(int x, char from, char to, char inter) {
		if(x==0) {
			return;
		}
		else {
		move(x-1,from, inter,to);
		System.out.println("move disk "+x+" from "+from+" to "+to);
		move(x-1,inter, to, from);
	}}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int n=3;
		move(n,'A','B','C');
	}

}
