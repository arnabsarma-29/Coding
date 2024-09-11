const puppeteer = require('puppeteer');
async function scrapeProduct(url)
{
	const browser = await puppeteer.launch();
	const page = await browser.newPage();
	await page.goto(url);
	
	const [el] = await page.$x('//*[@id="imgBlkFront"]')
        const src = await el.getProperty('src');
	const imgURL = await src.jsonValue();

	const [el12] = await page.$x('//*[@id="productTitle"]')
        const txt = await el12.getProperty('textContent');
	const title = await txt.jsonValue();

	const [el13] = await page.$x('//*[@id="price"]')
        const txt2 = await el13.getProperty('textContent');
	const price = await txt2.jsonValue();
	
	console.log({imgURL, title, price});
	await browser.close();
};

scrapeProduct('https://www.amazon.in/Linux-Kernel-Development-Cookbook-programming/dp/178995343X/ref=sr_1_16?crid=14Y9F9DHSBVTX&keywords=operating+system+concepts&qid=1646694842&s=books&sprefix=operating+system%2Cstripbooks%2C333&sr=1-16https://www.amazon.in/Operating-System-Concepts-Abraham-Silberschatz/dp/1118129385');