% hWW.mp -- do not edit, generated automatically by hw2.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 100*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$W^{\pm }$", __g2);
vvertex ("label=$W^{\mp }$", __g3);
vvertex ("label=$H$", __g1);
vleft (__g1);
vright (__g2, __g3);
vvertex ("label=$\frac {2M_W^2}{v}$", __v1);
vconnect ("dashes", __g1, __v1);
vconnect ("boson", __v1, __g3);
vconnect ("boson", __g2, __v1);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
