//
//  functions.c
//  circuit_calculator
//
//  Created by Mick Maciel on 15/04/2024.
//

#include "functions.h"

void main_menu(void){
    printf("+------------------------------------------+\n");
    printf("|                                          |\n");
    printf("|                .:::::::.                 |\n");
    printf("|             .:           :.              |\n");
    printf("|           ::               ::            |\n");
    printf("|          ::                 ::           |\n");
    printf("|          ::                 ::           |\n");
    printf("|           ::               ::            |\n");
    printf("|        :    ::           ::    :         |\n");
    printf("|        :.::::::.       .::::::.:         |\n");
    printf("|                                          |\n");
    printf("|       .:::.   ::   :  ::.     .:         |\n");
    printf("|      ::    :  ::   :  :: :. .: :         |\n");
    printf("|      ::    :  ::::.:  ::  :::  :         |\n");
    printf("|       ':::'   ::   :  ::   :   :         |\n");
    printf("|                                          |\n");
    printf("|           C A L C U L A T O R            |\n");
    printf("|                                          |\n");
    printf("+------------------------------------------+\n");
}

void run_calculator(void){
        
    int sel;
    
    main_menu();
    printf("+------------------------------------------+\n");
    printf("|            M A I N   M E N U             |\n");
    printf("+------------------------------------------+\n");
    printf("          Select Calculator Mode \n\n");
    printf("        1 -> Ohms Calculator Mode \n");
    printf("        2 -> Volts Calculator Mode \n");
    printf("        3 -> mA Calculator Mode \n");
    printf("        4 -> Quit Program \n\n");
    printf("        Type a Option : ");
    scanf("%d", &sel);
        
        if(sel != 0 && sel < 4){
            select_calculator(sel);
        }
        
        else if (sel == 4) {
            printf("   Quiting...\n");
        }
}

//int select_calculator(int sel)
void select_calculator(int s){
    float V = 0.0, I = 0.0, R = 0.0;
    char c;
    
    switch (s) {
        case  1:
            while (1) {
                printf("+------------------------------------------+\n");
                printf("|          Resistor Calculator             |\n");
                printf("+------------------------------------------+\n");
                printf("   Input Volts(V): ");
                scanf("%f", &V);
                printf("   Voltage (mA): ");
                scanf("%f", &I);
                printf("............................................\n");
                printf("   Resistor = %.2f Ohms\n", resistor_calculator(V, I));
                printf("............................................\n");
                printf("Type ANY key to continue or M to main menu...\n ");
                scanf(" %c", &c);
                
                if(c == 'm' || c == 'M'){
                    run_calculator();
                }
            }
            break;

        case 2:
            while (1) {
                printf("+------------------------------------------+\n");
                printf("|              Volts Calculator            |\n");
                printf("+------------------------------------------+\n");
                printf("   Voltage (mA): ");
                scanf("%f", &I);
                printf("   Resistor (Ohms): ");
                scanf("%f", &R);
                printf("............................................\n");
                printf("   Input Volts =  %.1f V\n",  voltage_calculator(I, R));
                printf("............................................\n\n\n");
                printf("Type ANY key to continue or M to main menu...\n ");
                scanf(" %c", &c);
                
                if(c == 'm' || c == 'M'){
                    run_calculator();
                }
            }
            break;
            
        case 3:
            while(1) {
                printf("+------------------------------------------+\n");
                printf("|            Ampers Calculator             |\n");
                printf("+------------------------------------------+\n");
                printf("   Input Volts (V): ");
                scanf("%f", &V);
                printf("   Resistor(Ohms): ");
                scanf("%f", &R);
                printf("............................................\n");
                printf("   Circuit Voltage =  %f mA\n",  ampers_calculator(V, R));
                printf("............................................\n");
                printf("Type ANY key to continue or M to main menu...\n ");
                scanf(" %c", &c);
                
                if(c == 'm' || c == 'M'){
                    run_calculator();
                }
            }
            break;
            
        default:
            printf("Please, select a valid option!\n\n\n");
            break;
    }
}
    
    float resistor_calculator(float v, float i){
        float r = v / i;
        return r;
    }
    
    float voltage_calculator( float i, float r){
        float v = i * r;
        return v;
    }
    
    float ampers_calculator(float v, float r){
       float i = v / r;
        return i ;
    }
    
