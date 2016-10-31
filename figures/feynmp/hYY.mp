% hYY.mp -- do not edit, generated automatically by hgamma.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 100*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$\gamma $", __g2);
vvertex ("label=$\gamma $", __g1);
vvertex ("label=$H$", __H);
vleft (__H);
vright (__g1, __g2);
vconnect ("dashes", __H, __h);
vpolygon ("empty,tension=0.5, label=$W^{\pm }$", __h, __v1, __v2);
vconnect ("boson", __v2, __g2);
vconnect ("boson", __v1, __g1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
