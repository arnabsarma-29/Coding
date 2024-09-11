const puppeteer = require('puppeteer');
async function scrapeProduct(url)
{
	const browser = await puppeteer.launch();
	const page = await browser.newPage();
	await page.goto(url);
	
	const [el] = await page.$x('/html/body/div[1]/div/div[3]/div[1]/div[1]/div[1]/div/div[1]/div[2]/div[1]/div[2]/img')
        const src = await el.getProperty('src');
	const imgURL = await src.jsonValue();

	const [el12] = await page.$x('/html/body/div[1]/div/div[3]/div[1]/div[2]/div[2]/div/div[1]/h1/span')
        const txt = await el12.getProperty('textContent');
	const title = await txt.jsonValue();

	const [el13] = await page.$x('/html/body/div[1]/div/div[3]/div[1]/div[2]/div[2]/div/div[3]/div[1]/div/div[1]')
        const txt2 = await el13.getProperty('textContent');
	const price = await txt2.jsonValue();
	
	console.log({imgURL, title, price});
	browser.close();
};

scrapeProduct('https://www.flipkart.com/linux-kernel-programming/p/itm58a24e4e9fc86?pid=9781789953435&lid=LSTBOK97817899534356RZLZB&marketplace=FLIPKART&q=Linux+Kernel+Programming&store=bks&srno=s_1_1&otracker=search&otracker1=search&fm=Search&iid=55e07631-b618-4e5b-b2ea-9472ffd43b2e.9781789953435.SEARCH&ppt=sp&ppn=sp&ssid=kfc2d1mt2bd4b6yo1646694898904&qH=cb4cd49bc12d7af7');