/**
 * @file Giai phuong trinh bac 2
 * @author SnappyS (thinh.nt233662@sis.hust.edu.vn))
 * @brief 
 * @version 0.1
 * @date 2023-12-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <math.h>



int main(){
	float a, b, c;
	printf ("Vui long nhap he so x^2: ");
	scanf("%f", &a);
	
	printf ("Vui long nhap he so x: ");
	scanf("%f", &b);
	
	printf ("Vui long nhap he so tu do: ");
	scanf("%f", &c);

    // delta
    float delta = pow(b,2) - 4 * a * c;

    
    //equation
    if (delta > 0 ){
        float x1 = (-b - sqrt(delta))/(2*a); 
        float x2 = (-b + sqrt(delta))/(2*a);
        printf ("Phuong tr co hai nghiem phan biet la: x1 = %f, x2 = %f ",x1, x2);
    } else if (delta == 0){
        float x = -b/(2*a);
        printf (" co nghiem kep la: x = %.2f ",  x);
    }else {
        printf(" vo nghiem ");
    }

	return 0 ;
}