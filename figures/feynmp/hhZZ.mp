% hhZZ.mp -- do not edit, generated automatically by h2z2.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 100*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$Z$", __g4);
vvertex ("label=$Z$", __g3);
vvertex ("label=$H$", __g1);
vvertex ("label=$H$", __g2);
vleft (__g1, __g2);
vright (__g3, __g4);
vvertex ("label=$\frac {M_Z^2}{v^2}$", __v1);
vconnect ("dashes", __g1, __v1);
vconnect ("dashes", __g2, __v1);
vconnect ("boson", __v1, __g4);
vconnect ("boson", __g3, __v1);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
