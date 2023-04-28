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
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

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
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Enter the store */

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(23);

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Signin */

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=1E7A22904D6E9442A148E405168815BF?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
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
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=1E7A22904D6E9442A148E405168815BF?signonForm=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=ITYpRLNOYnNCHtfyAubKtyioGCOnbIjlLquPn0xgi8bSeWs73Adg2SfeEHo7LbkGwt1jodGA-w2R--DC97oBYf1cFcf4KKOt67clLomek9w=", ENDITEM, 
		"Name=__fp", "Value=ZCoQPJAx3f9x2VFN91qRu1Cq28Ndv0oLIFAnDGzCcCh_Qa9DzbLj2r0n7VLG1p6N", ENDITEM, 
		LAST);

	/* Click on Pet */

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(11);

	web_url("sm_birds.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=BIRDS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Product */

	lr_think_time(19);

	web_url("AV-CB-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=AV-CB-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=BIRDS", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Item */

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(14);

	web_url("EST-18", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-18", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=AV-CB-01", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Add to cart */

	lr_think_time(16);

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-18", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-18", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Proceed to checkout */

	lr_think_time(19);

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-18", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* Enter payment details */

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	lr_think_time(60);

	web_submit_data("Order.action", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=MasterCard", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 8765", ENDITEM, 
		"Name=order.expiryDate", "Value=12/05", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABCd", ENDITEM, 
		"Name=order.billToLastName", "Value=XYXX", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Roadd", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-2062", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alton", ENDITEM, 
		"Name=order.billState", "Value=KA", ENDITEM, 
		"Name=order.billZip", "Value=943039", ENDITEM, 
		"Name=order.billCountry", "Value=IN", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=nbgZ2rEwPqia6jI9h0dGHWacE3yN7DuC1w9XmM93mCly1rdjC98EKxNPLOOt0bbKp74TwmHhoX0NUsc0-tLxzpP5otigluRSSSA1Vt9QjSw=", ENDITEM, 
		"Name=__fp", "Value=T0TPyIiaqV2QmBJthmF9hhRu2swz8KMLNNwie3m5Io-_bmf8xcxi4CWHDxa4SLPRLONviqAbM7SiHxG-0LxcXhFaL9_jDjiyBB3ywhIqVc5XCOxL84eXpg==", ENDITEM, 
		LAST);

	/* Click on Confirm order */

	lr_think_time(17);

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	/* Click on Signup */

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}