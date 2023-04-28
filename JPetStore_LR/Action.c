Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Not_A Brand\";v=\"99\", \"Google Chrome\";v=\"109\", \"Chromium\";v=\"109\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* EnterStore */

	lr_start_transaction("JPetstore_SC01_TS02_EnterStore");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(47);

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_end_transaction("JPetstore_SC01_TS02_EnterStore",LR_AUTO);

	/* Signin */

	lr_start_transaction("JPetstore_SC01_TS03_Signin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(27);

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=B47AF1BF1C8C32BB8AE344DABB636256?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=B47AF1BF1C8C32BB8AE344DABB636256?signonForm=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=PeEkxQpIhrIH_WTfY1_l_CKVMMZb9ATqcg1L_tCOfzZvfvenqvf1m7TfxRDQzkdNVMvFRkAXvErrJIVxxplS-M3tNqfBVHAOPGuxDSCd6NM=", ENDITEM, 
		"Name=__fp", "Value=VPNpHadkd57MjPqukRf8X4jY9W7Cd-RlOkofz_GDbIZpIEmpqWr_aBZPaz7imEHQ", ENDITEM, 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS03_Signin",LR_AUTO);

	/* ClickonDogs */

	lr_start_transaction("JPetstore_SC01_TS04_ClickonDOGS");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(38);

	web_url("sm_dogs.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS04_ClickonDOGS",LR_AUTO);

	/* ClickonProductID */

	lr_think_time(63);

	lr_start_transaction("JPetstore_SC01_TS05_ClickonProductID");

	web_url("K9-BD-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-BD-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS05_ClickonProductID",LR_AUTO);

	/* ClickonItemID */

	lr_start_transaction("JPetstore_SC01_TS06_ClickonItemID");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(44);

	web_url("EST-6", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-BD-01", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS06_ClickonItemID",LR_AUTO);

	/* AddtoCart */

	lr_think_time(44);

	lr_start_transaction("JPetstore_SC01_TS07_ClickonAddtoCart");

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-6", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS07_ClickonAddtoCart",LR_AUTO);

	/* ProceedtoCheckout */

	lr_think_time(50);

	lr_start_transaction("JPetstore_SC01_TS08_ProceedtoCheck");

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-6", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("JPetstore_SC01_TS08_ProceedtoCheck",LR_AUTO);

	/* PaymentDetails */

	lr_start_transaction("JPetstore_SC01_TS09_PaymentDetails");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	lr_think_time(77);

	web_submit_data("Order.action", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=American Express", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9098", ENDITEM, 
		"Name=order.expiryDate", "Value=12/04", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABCd", ENDITEM, 
		"Name=order.billToLastName", "Value=XYXt", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Roadd", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-2062", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alton", ENDITEM, 
		"Name=order.billState", "Value=KA", ENDITEM, 
		"Name=order.billZip", "Value=943039", ENDITEM, 
		"Name=order.billCountry", "Value=IN", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=VXS8f7AIoJWddC93cuI5lCIvHfXutnSMP1P2zGtM7DBSr8lWRFnIxCvT9yl8QBZHekO9h8qyRcw07m7sjfL5dWBJFNHGlNH8JZ78uq1j7LA=", ENDITEM, 
		"Name=__fp", "Value=A1b28_dFmI47CA6DSwM76BaViCf28IB0iBseOFE8HU7V1WK_cnTlJAw1fcs_X1NCMWVPnT8aWaTWG3_baqnxpOEQ4NjPsY420G1UOkOKnGPBup8mmSrxWQ==", ENDITEM, 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS09_PaymentDetails",LR_AUTO);

	/* ConfirmOrder */

	lr_think_time(43);

	lr_start_transaction("JPetstore_SC01_TS10_ConfirmOrder");

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS10_ConfirmOrder",LR_AUTO);

	/* Signout */

	lr_start_transaction("JPetstore_SC01_TS11_Signout");

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("JPetstore_SC01_TS11_Signout",LR_AUTO);

	return 0;
}