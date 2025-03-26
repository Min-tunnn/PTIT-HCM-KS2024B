{
    let arr1=[
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
    ];
    document.write("Dãy số ban đàu arr1: "+"<br>");
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
    document.write("=>")
    for(let i = 0; i< arr1.length-1; i++){
        for(let j = i+1; j<arr1.length; j++){
            if(arr1[j]<arr1[i]){
                let temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
}
{
    let arr1=[
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
    ];
    document.write("<br>"+"Dãy số ban đàu arr2: "+"<br>");
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
    document.write("=>")
    for(let i = 0; i< arr1.length-1; i++){
        for(let j = i+1; j<arr1.length; j++){
            if(arr1[j]<arr1[i]){
                let temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
}
{
    let arr1=[
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
        Math.floor(Math.random()*20),
    ];
    document.write("<br>"+"Dãy số ban đàu arr3: "+"<br>");
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
    document.write("=>")
    for(let i = 0; i< arr1.length-1; i++){
        for(let j = i+1; j<arr1.length; j++){
            if(arr1[j]<arr1[i]){
                let temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for (let i= 0 ; i<arr1.length; i++){
        document.write(arr1[i]+" ");
    }
}