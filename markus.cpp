#include "soapH.h" // obtain the generated stub  
#include "GlobalWeatherSoap.nsmap" // obtain the generated XML namespace mapping table for the Quote service  
main()  {
	//usage: g++ -o markus markus.cpp soapC.cpp soapClient.cpp -lgsoap++

   struct soap soap;
   struct _ns1__GetCitiesByCountry req;
   //req.CountryName = "Sweden";
   struct _ns1__GetCitiesByCountryResponse res;

   soap_init(&soap);

   if (soap_call___ns1__GetCitiesByCountry(&soap, NULL, NULL, &req , res ) == SOAP_OK)
      printf("The result \n",  res.GetCitiesByCountryResult );

   else // an error occurred  
      soap_print_fault(&soap, stderr); // display the SOAP fault on the stderr stream

   soap_end(&soap);
   soap_done(&soap);
}
