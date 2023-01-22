const merge = (arr) => {
    if (arr.length <= 1) {
        return arr;
    }
    const mid = Math.floor(arr.length / 2);
    const fHalf = [];
    const sHalf = [];
    for (let i = 0; i < mid; i++) {
        fHalf.push(arr[i]);
    }
    for (let i = mid; i < arr.length; i++) {
        sHalf.push(arr[i]);
    }
    const fSorted = merge(fHalf);//ekhane thamse
    const sSorted = merge(sHalf);
    const fullSorted = [];
    let fIndex = 0;
    let sIndex = 0;
    for (let i = 0; i < arr.length; i++) {
        if (fIndex === fSorted.length) {
            fullSorted.push(sSorted[sIndex]);
            sIndex++;
        } else if (sIndex === sSorted.length) {
            fullSorted.push(fSorted[fIndex]);
            fIndex++;
        } else if (fSorted[fIndex] > sSorted[sIndex]) {
            fullSorted.push(sSorted[sIndex]);
            sIndex++;
        } else {
            fullSorted.push(fSorted[fIndex]);
            fIndex++;
        }
    }
    return fullSorted;
};

const mainFunc = (arr) => {
    const answer = merge(arr);
    return answer;
};
console.log(mainFunc([3, 2, 5, 34]));