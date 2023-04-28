Action()
{

	/* Launch the url */
	
	web_reg_find("Search=Body",
		"SaveCount=Launch_count",
		"Text=Welcome ",
		LAST);

	lr_start_transaction("Jpetstore_S00_T01_LaunchUrl");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T01_LaunchUrl", LR_AUTO);

	
     lr_think_time(23);

     

	web_reg_save_param_ex(
		"ParamName=c_jsessionid",
		"LB=jsessionid=",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);
     

	web_reg_save_param_ex(
		"ParamName=c_pet",
		"LB=categoryId=",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);

	
	/* Click on Enter the store */

	web_reg_find("Search=Body",
		"SaveCount=Store_count",
		"Text=Freshwater ",
		LAST);
	
	lr_start_transaction("Jpetstore_S00_T02_EntertheStore");
	

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T02_EntertheStore", LR_AUTO);


	/* Click on Signin */


	lr_start_transaction("Jpetstore_S00_T03_Signin");
	
	web_reg_find("Search=Body",
		"SaveCount=Login_count",
		"Text=username",
		LAST);


	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid={c_jsessionid}?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

		
	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid={c_jsessionid}?signonForm=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={p_username}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=ITYpRLNOYnNCHtfyAubKtyioGCOnbIjlLquPn0xgi8bSeWs73Adg2SfeEHo7LbkGwt1jodGA-w2R--DC97oBYf1cFcf4KKOt67clLomek9w=", ENDITEM, 
		"Name=__fp", "Value=ZCoQPJAx3f9x2VFN91qRu1Cq28Ndv0oLIFAnDGzCcCh_Qa9DzbLj2r0n7VLG1p6N", ENDITEM, 
		LAST);
	lr_end_transaction("Jpetstore_S00_T03_Signin", LR_AUTO);
	
	lr_think_time(11);

	/* Click on Pet */
	web_reg_save_param_ex(
		"ParamName=c_productID",
		"LB=productId=",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);

	lr_start_transaction("Jpetstore_S00_T04_Pets");
	
	web_reg_find("Search=Body",
		"SaveCount=Pet_count",
		"Text=Breeds",
		LAST);

	web_url("sm_birds.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={c_pet}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T04_Pets", LR_AUTO);


	lr_think_time(19);
	
	/* Click on Product */

	web_reg_save_param_ex(
		"ParamName=c_itemID",
		"LB=itemId=",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);

	lr_start_transaction("Jpetstore_S00_T05_ClickonProduct");
	web_reg_find("Search=Body",
		"SaveCount=Product_count",
		"Text=Birds",
		LAST);

	web_url("AV-CB-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={c_productID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={c_pet}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T05_ClickonProduct", LR_AUTO);


	lr_think_time(14);
	
	/* Click on Item */

	lr_start_transaction("Jpetstore_S00_T06_ClickonItemID");

	web_reg_find("Search=Body",
		"SaveCount=item_count",
		"Text=Amazon",
		LAST);
	web_url("EST-18", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId={c_itemID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={c_productID}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("Jpetstore_S00_T06_ClickonItemID", LR_AUTO);

	lr_think_time(16);

	/* Click on Add to cart */

	lr_start_transaction("Jpetstore_S00_T07_ClickonAddtoCart");

	web_reg_find("Search=Body",
		"SaveCount=AddCart_count",
		"Text=Parrot",
		LAST);
	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={c_itemID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId={c_itemID}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T07_ClickonAddtoCart", LR_AUTO);


	lr_think_time(19);
	
	web_reg_save_param_ex(
		"ParamName=c_cardType",
		"LB=value=\"",
		"RB=\">",
		SEARCH_FILTERS,
		LAST);

	/* Click on Proceed to checkout */

	lr_start_transaction("Jpetstore_S00_T08_ClickonProceedtoCheck");
	web_reg_find("Search=Body",
		"SaveCount=Checkout_count",
		"Text=Shopping ",
		LAST);

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={c_itemID}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T08_ClickonProceedtoCheck", LR_AUTO);


	lr_think_time(60);
	
	/* Enter payment details */

	lr_start_transaction("Jpetstore_S00_T09_EnterPayment");
	web_reg_find("Search=Body",
		"SaveCount=Payment_count",
		"Text=name ",
		LAST);

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Order.action", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value={c_cardType}", ENDITEM, 
		"Name=order.creditCard", "Value={p_creditcard}", ENDITEM, 
		"Name=order.expiryDate", "Value=12/05", ENDITEM, 
		"Name=order.billToFirstName", "Value={p_firstName}", ENDITEM, 
		"Name=order.billToLastName", "Value={p_lastName}", ENDITEM, 
		"Name=order.billAddress1", "Value={p_Address1}", ENDITEM, 
		"Name=order.billAddress2", "Value={p_Address2}", ENDITEM, 
		"Name=order.billCity", "Value={p_city}", ENDITEM, 
		"Name=order.billState", "Value={p_State}", ENDITEM, 
		"Name=order.billZip", "Value=943039", ENDITEM, 
		"Name=order.billCountry", "Value=IN", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=nbgZ2rEwPqia6jI9h0dGHWacE3yN7DuC1w9XmM93mCly1rdjC98EKxNPLOOt0bbKp74TwmHhoX0NUsc0-tLxzpP5otigluRSSSA1Vt9QjSw=", ENDITEM, 
		"Name=__fp", "Value=T0TPyIiaqV2QmBJthmF9hhRu2swz8KMLNNwie3m5Io-_bmf8xcxi4CWHDxa4SLPRLONviqAbM7SiHxG-0LxcXhFaL9_jDjiyBB3ywhIqVc5XCOxL84eXpg==", ENDITEM, 
		LAST);

		lr_end_transaction("Jpetstore_S00_T09_EnterPayment", LR_AUTO);

	lr_think_time(17);

	/* Click on Confirm order */

	lr_start_transaction("Jpetstore_S00_T10_ConfirmOrder");
	
	web_reg_find("Search=Body",
		"SaveCount=CofirmOrder_count",
		"Text=confirm  ",
		LAST);

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);


lr_end_transaction("Jpetstore_S00_T10_ConfirmOrder", LR_AUTO);

	lr_think_time(17);
	/* Click on Signup */

	lr_start_transaction("Jpetstore_S00_T11_ClickonSignOut");
	web_reg_find("Search=Body",
		"SaveCount=Signup_count",
		"Text=submitted  ",
		LAST);

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

		lr_end_transaction("Jpetstore_S00_T11_ClickonSignOut", LR_AUTO);


	return 0;
}