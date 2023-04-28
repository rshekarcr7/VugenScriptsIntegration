#include "D:\\LRJmeterScriptNew\\LRFilesPass\\JPetstore\\JessicaReusable_ModularApproachCode.txt"
Action()
{
	web_reg_save_param_ex(
		"ParamName=c_jsessionid",
		"LB=jsessionid=",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);

	web_reg_find(
		"Search=Body",
		"SaveCount=TextCount",
		"Text=Welcome",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=c_categoryId",
		"LB=&amp;categoryId=",
		"RB=\">","Ordinal=all",
		SEARCH_FILTERS,
		LAST);

	/*Launch*/

	launch();
		
		lr_save_string(lr_paramarr_random("c_categoryId"),"Random_categoryId");
		
		web_reg_find(
		"Search=Body",
		"SaveCount=StoreCount",
		"Text=username and password",
		LAST);
		
		/*ClickonEntertheStore*/
	lr_start_transaction("Petstore_SC01_TS02_EntertheStore");

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid={c_jsessionid}?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS02_EntertheStore", LR_AUTO);
		
		web_reg_find("Search=Body",
		"SaveCount=ValueCount",
		"Text=Welcome ABC",
		LAST);


	/*Login*/

	login();
		web_reg_find("Search=Body",
		"SaveCount=PetCount",
		"Text=Fish",
		LAST);

//	&amp;productId=FI-SW-01"
		web_reg_save_param_ex(
		"ParamName=c_productId",
		"LB=&amp;productId=",
		"RB=\"","ordinal=all",
		SEARCH_FILTERS,
		LAST);

		
		/*ClickonFish*/

	lr_start_transaction("Petstore_SC01_TS04_clickonPet");

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS04_clickonPet", LR_AUTO);
		
		lr_save_string(lr_paramarr_random("c_productId"),"Random_productId");

		web_reg_save_param_ex(
		"ParamName=c_itemId",
		"LB=viewItem=&amp;itemId=",
		"RB=\">","ordinal=all",
		SEARCH_FILTERS,
		LAST);

	/*ClickonProuctID*/

	lr_start_transaction("Petstore_SC01_TS05_clickonProductID");

	web_url("FI-SW-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={Random_categoryId}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS05_clickonProductID", LR_AUTO);
		
		lr_save_string(lr_paramarr_random("c_itemId"),"Random_itemId");

		web_reg_find("Search=Body",
		"SaveCount=Itemcount",
		"Text=Angelfish",
		LAST);

	/*ClickonItemID*/

	lr_start_transaction("Petstore_SC01_TS06_clickonItemID");

	web_url("EST-1", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={Random_productId}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS06_clickonItemID", LR_AUTO);
		web_reg_find("Search=Body",
		"SaveCount=ShoppingCount",
		"Text=Shopping Cart",
		LAST);


	/*ClickonAddtoCart*/

	lr_start_transaction("Petstore_SC01_TS07_clickonAddtoCart");

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId={Random_itemId}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS07_clickonAddtoCart", LR_AUTO);
		web_reg_find("Search=Body",
		"SaveCount=Count",
		"Text=FI-SW-01",
		LAST);


		web_reg_save_param_ex(
		"ParamName=c_cardType",
		"LB=value=\"",
		"RB=\">",
		"Ordinal=all",
		SEARCH_FILTERS,
		LAST);

	/*Proceed to checkout*/

	lr_start_transaction("Petstore_SC01_TS08_proceedtoCheck");

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={Random_itemId}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS08_proceedtoCheck", LR_AUTO);
		
			web_reg_find("Search=Body",
		"SaveCount=PaymentCount",
		"Text=different address",
		LAST);


	/*EnterPaymentDetails*/

	lr_start_transaction("Petstore_SC01_TS09_EnterPaymentDetails");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Order.action", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value={c_cardType}", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9990", ENDITEM, 
		"Name=order.expiryDate", "Value=12/07", ENDITEM, 
		"Name=order.billToFirstName", "Value={p_firstName}", ENDITEM, 
		"Name=order.billToLastName", "Value={p_lastName}", ENDITEM, 
		"Name=order.billAddress1", "Value={p_Address1}", ENDITEM, 
		"Name=order.billAddress2", "Value={p_lastName}", ENDITEM, 
		"Name=order.billCity", "Value={p_city}", ENDITEM, 
		"Name=order.billState", "Value=kA", ENDITEM, 
		"Name=order.billZip", "Value=943039", ENDITEM, 
		"Name=order.billCountry", "Value=IN", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=ed2gcH845O4MJR9yZRfD2lQ1-JkySZviqJoksZv4XwnL6rQSoKj-PTy0Ts_Tj-kJxlbwPrTYom6dOc2nqVGc-3hDETAKPM4hIqhla3pLGQE=", ENDITEM, 
		"Name=__fp", "Value=hk7nYvNNONxwXF-uLXX9pYKwofhBs59FqenJHQSDtOuDpH-MKrYswbbGGX3cIcmyfw_sQw7_mg-09VSCQ90HXyRIIt_MRs2LdhiwcNsOX2saS5d13bX2qg==", ENDITEM, 
		LAST);

	lr_end_transaction("Petstore_SC01_TS09_EnterPaymentDetails", LR_AUTO);
	web_reg_find("Search=Body",
		"SaveCount=ConfirmCount",
		"Text=press continue",
		LAST);

	/*ConfirmtheOrder*/

	lr_start_transaction("Petstore_SC01_TS10_ConfirmOrder");

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Petstore_SC01_TS10_ConfirmOrder", LR_AUTO);
		web_reg_find("Search=Body",
		"SaveCount=SignoffCount",
		"Text=Thank you",
		LAST);


	/*ClickonSignoff*/

	signoff();


return 0;
}