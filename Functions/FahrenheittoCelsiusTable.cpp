// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
// Sample Input 1:
// 0 
// 100 
// 20
// Sample Output 1:
// 0   -17
// 20  -6
// 40  4
// 60  15
// 80  26
// 100 37
void printTable(int start, int end, int step) {
    
    while(start<=end) {

            int C1=((5*(start-32))/9);

         cout<<start<<"\t"<<C1<<endl;

       start+=step;
}

}
