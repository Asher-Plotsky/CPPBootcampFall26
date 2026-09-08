// TASK 02 -- The header file: WHAT exists, not HOW it works
//
// A header is a promise. It tells any .cpp file that #includes it
// "these functions exist, here are their names and types, trust me."
// It does NOT contain the actual instructions for how the functions work.
// That's the .cpp file's job.
//
// Created by asher on 9/3/2026.
//

#pragma once

double circle_area(double r);
double rectangle_area(double h, double w);
