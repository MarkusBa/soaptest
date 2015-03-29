#include "soapStub.h" // get proxy 
#include "GlobalWeather.nsmap" // get namespace bindings 
int main() 
{ 
   Quote q; 
   float r; 
   if (q.ns1__getQuote("IBM", r) == SOAP_OK) 
      std::cout << r << std::endl; 
   else
      soap_print_fault(q.soap, stderr); 
   return 0; 
}
