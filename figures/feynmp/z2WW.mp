% z2WW.mp -- do not edit, generated automatically by w2z2.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 100*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$W_{\gamma }$", __g4);
vvertex ("label=$A_{\alpha }/Z_{\alpha }$", __g2);
vvertex ("label=$W_{\beta }$", __g3);
vvertex ("label=$A_{\mu }/Z_{\mu }$", __g1);
vleft (__g1, __g2);
vright (__g3, __g4);
vvertex ("", __v1);
vconnect ("boson", __g1, __v1);
vconnect ("boson", __v1, __g2);
vconnect ("boson", __v1, __g3);
vconnect ("boson", __g4, __v1);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
