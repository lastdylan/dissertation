% quarkGluon.mp -- do not edit, generated automatically by ggg.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 150*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$A_{\alpha }^{b}$", __g1);
vvertex ("label=$A_{\beta }^{c}$", __g2);
vvertex ("label=$A_{\mu }^{a}$", __g);
vleft (__g);
vright (__g1, __g2);
vvertex ("label=$\propto -\sqrt {4\pi \alpha _{s}}f^{abc}$", __v1);
vconnect ("gluon", __g, __v1);
vconnect ("gluon, tension=0.7", __g1, __v1);
vconnect ("gluon, tension=0.7", __v1, __g2);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
