Action()
{

	/*Launch*/

	/*ClickonEntertheStore*/

	/*ClickonEntertheStore*/

	/*ClickonEntertheStore*/

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=BDD46AB566459BB57C0061196A34C257?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/*Login*/

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=BDD46AB566459BB57C0061196A34C257?signonForm=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=i5yGsK-w2G5szBbv-EXUM4EGG1kUQsaAeRKZLi30DUeTIuJI-9tupMVIN0xK7PWEMaSpqSybCMaGeLnc5JDeVESEqQCBUhQ8LenMU5Bv14g=", ENDITEM, 
		"Name=__fp", "Value=4AcHnPQY2o_DTjoEphdrrKB2dJPr7kMdENdybcHA_1yqKqJ_2eVok1XnJXPQsMC0", ENDITEM, 
		LAST);

	/*ClickonFish*/

	/*ClickonFish*/

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/*ClickonProuctID*/

	/*ClickonProuctID*/

	web_url("FI-SW-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/*ClickonItemID*/

	/*ClickonItemID*/

	web_url("EST-1", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/*ClickonAddtoCart*/

	/*ClickonAddtoCart*/

	/*ClickonAddtoCart*/

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/*EnterPaymentDetails*/

	/*EnterPaymentDetails*/

	/*EnterPaymentDetails*/

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/*EnterPaymentDetails*/

	/*EnterPaymentDetails*/

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
		"Name=order.cardType", "Value=MasterCard", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9990", ENDITEM, 
		"Name=order.expiryDate", "Value=12/07", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABCd", ENDITEM, 
		"Name=order.billToLastName", "Value=XYXt", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Roadd", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-2087", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alton", ENDITEM, 
		"Name=order.billState", "Value=kA", ENDITEM, 
		"Name=order.billZip", "Value=943039", ENDITEM, 
		"Name=order.billCountry", "Value=IN", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=ed2gcH845O4MJR9yZRfD2lQ1-JkySZviqJoksZv4XwnL6rQSoKj-PTy0Ts_Tj-kJxlbwPrTYom6dOc2nqVGc-3hDETAKPM4hIqhla3pLGQE=", ENDITEM, 
		"Name=__fp", "Value=hk7nYvNNONxwXF-uLXX9pYKwofhBs59FqenJHQSDtOuDpH-MKrYswbbGGX3cIcmyfw_sQw7_mg-09VSCQ90HXyRIIt_MRs2LdhiwcNsOX2saS5d13bX2qg==", ENDITEM, 
		LAST);

	/*ConfirmtheOrder*/

	/*ConfirmtheOrder*/

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/*ClickonSignoff*/

	/*ClickonSignoff*/

	/*ClickonSignoff*/

	/*ClickonSignoff*/

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}