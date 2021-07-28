const container = document.getElementById("container")
const txarea = document.getElementById("tx")
const adtask = document.getElementById("ad")
const rmtask = document.getElementById("rm")
const outputText = document.getElementById("outputText")


function addTASK(){
    let newDiv = document.createElement("input")
    newDiv.type = "button"
    newDiv.id = "newid"
    newDiv.value = txarea.value
    console.log(newDiv.textElement)
    outputText.appendChild(newDiv)
}

function rmTASK(){
    const oldDiv = document.getElementById("newid")
    oldDiv.remove()
}

adtask.addEventListener("click", addTASK)
rmtask.addEventListener("click", rmTASK)
