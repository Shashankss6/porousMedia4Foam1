/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  7
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       volScalarField;
    location    "4.350024e+08";
    object      Y.C;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 0 0 0 0 0 0];

internalField   nonuniform List<scalar> 
80
(
0.0100231
0.0101888
0.0106826
0.0117133
0.013121
0.0142098
0.0147667
0.0149998
0.0150885
0.0151208
0.0151325
0.0151367
0.0151383
0.0151389
0.0151391
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
)
;

boundaryField
{
    outlet
    {
        type            zeroGradient;
    }
    inlet
    {
        type            fixedValue;
        value           uniform 0.00997043;
    }
    frontAndBack
    {
        type            empty;
    }
}


// ************************************************************************* //
