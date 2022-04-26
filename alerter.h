#include <stdio.h>
#include <assert.h>

#define TEMP_THRESHOLD 200

int alertFailureCount = 0;

int networkAlertStub(float celcius);

void alertInCelcius(float farenheit);

float fahrenheitToCelcius(float farenheit);