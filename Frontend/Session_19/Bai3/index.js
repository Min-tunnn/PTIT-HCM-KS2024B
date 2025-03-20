let vndTousd = parseFloat(prompt("VND => USD: "));
let usdTovnd = parseFloat(prompt("USD => VND: "));

document.write((vndTousd/23000).toFixed(2)+" USD"+'<br>');
document.write((usdTovnd*23000)+" Vnd");