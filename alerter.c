#include "alerter.h"

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if(celcius >TEMP_THRESHOLD)
		return 500;
	else
		return 200;
}

//SRP principle 

float fahrenheitToCelcius(float fahrenheit)
{
     return ((fahrenheit - 32) * 5 / 9);
}

//Usage of function pointer concept
void alertInCelcius(float fahrenheit, float (*fnPtrFahrenheitToCelcius)(float), int (*fnPtrNetworkAlertStub)(float)) {
    float celcius = fnPtrFahrenheitToCelcius(fahrenheit);
    int returnCode = fnPtrNetworkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
}

int main() {
    //Usage of function pointer concept
    alertInCelcius(400.5, &fahrenheitToCelcius, &networkAlertStub);
    alertInCelcius(303.6, &fahrenheitToCelcius, &networkAlertStub);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 1);
    alertInCelcius(500, &fahrenheitToCelcius, &networkAlertStub);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 2);   
    printf("All is well (maybe!)\n");
    return 0;
}
