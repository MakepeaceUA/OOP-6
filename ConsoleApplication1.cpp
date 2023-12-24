#include <iostream>
using namespace std;


//Задание #1
//class Fraction 
//{
//	int Num, Denom;
//
//public:
//    Fraction() 
//	{
//		Num = 1;
//		Denom = 1;
//	}
//
//	Fraction(int X,int Y) 
//	{
//		Num = X;
//		Denom = Y;
//	}
//
//	void Sum(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom + Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Sum:" << Num << "/" << Denom << "\n\n";
//    }
//	void Dif(Fraction Fr) 
//	{
//		Num = Num * Fr.Denom - Fr.Num * Denom;
//		Denom = Denom * Fr.Denom;
//		cout << "Difference:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Mult(Fraction Fr) 
//	{
//		Num *= Fr.Num;
//		Denom *= Fr.Denom;
//		cout << "Multiply:" << Num << "/" << Denom << "\n\n";
//	}
//
//	void Div(Fraction Fr) 
//	{
//		if (Fr.Num != 0) 
//		{
//			Num *= Fr.Denom;
//			Denom *= Fr.Num;
//			cout << "Dived:" << Num << "/" << Denom << "\n\n";
//		}
//		else 
//		{
//		  cout << "Error." << "\n";
//		}
//	}
//
//	void Output() 
//	{
//		cout << Num << "/" << Denom << "\n\n";
//	}
//
//	Fraction operator+(const Fraction& Fr) 
//	{
//		int Sum_Num = Num * Fr.Denom + Fr.Num * Denom;
//		int Sum_Demom = Denom * Fr.Denom;
//		return Fraction(Sum_Num, Sum_Demom);
//	}
//
//	Fraction operator-(const Fraction& Fr)
//	{
//		int Dif_Num = Num * Fr.Denom - Fr.Num * Denom;
//		int Dif_Denom = Denom * Fr.Denom;
//		return Fraction(Dif_Num, Dif_Denom);
//	}
//
//	Fraction operator*(const Fraction& Fr) 
//	{
//		int Mult_Num = Num * Fr.Num;
//		int Mult_Denom = Denom * Fr.Denom;
//		return Fraction(Mult_Num, Mult_Denom);
//	}
//
//	Fraction operator/(const Fraction& Fr)  
//	{
//		if (Fr.Num != 0)
//		{
//			int Div_Num = Num * Fr.Num;
//			int Div_Denom = Denom * Fr.Denom;
//			return Fraction(Div_Num, Div_Denom);
//		}
//		else
//		{
//			cout << "Error." << "\n";
//		}
//	}
//};
//
//
//int main() 
//{
//	Fraction first_frac(2,4);
//	Fraction second_frac(5,10);
//
//	Fraction frac = first_frac + second_frac;
//	//Fraction frac = first_frac - second_frac;
//	//Fraction frac = first_frac * second_frac;
//	//Fraction frac = first_frac / second_frac;
//
//	frac.Output();
//
//}




//Задание 2
//class Date
//{
//    int day;
//    int month;
//    int year;
//public:
//    Date() 
//    {
//        day = 1;
//        month = 1;
//        year = 2023;
//    }
//
//    Date(int D,int M,int Y) 
//    {
//        day = D;
//        month = M;
//        year = Y;
//    }
//
//    void Output() 
//    {
//        cout << day << "." << month << "." << year;
//    }
//    Date operator+(int days) 
//    {
//        int AllDays = day + month * 30 + year * 365;
//
//        AllDays += days;
//
//        int NewYear = AllDays / 365;
//        int Remain_Days = AllDays % 365;
//        int NewMonth = Remain_Days / 30;
//        int NewDay = Remain_Days % 30;
//
//        return Date(NewDay, NewMonth, NewYear);
//    }
//
//    int operator-(const Date& sec_date) 
//    {
//        int F_Days = day + month * 30 + year * 365;
//        int S_Days = sec_date.day + sec_date.month * 30 + sec_date.year * 365;
//
//        return F_Days - S_Days;
//    }
//};
//
//
//int main() 
//{
//    Date date1(24, 1, 2022);
//    Date date2(24, 1, 2023);
//    Date date3 = date1 + 365;
//
//    int dif = date2 - date1;
//    cout << dif << "\n\n";
//    date3.Output();
//
//}





