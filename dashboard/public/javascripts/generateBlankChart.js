function generateBlankChart(id, chartType) {
    var xmax = 1000; //maximum x-axis range in seconds. Should be the total runtime

    var layout = {
    xaxis: {range: [0, xmax]},
    width: 450,
    height: 400,
    margin: {
        l: 40,
        r: 40,
        b: 40,
        t: 40,
      }
    };

    Plotly.newPlot(id, [{
        y:[],
        type: chartType
    }], layout);
}