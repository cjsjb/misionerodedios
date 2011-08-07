\context DrumStaff = "Huevo"
<< 
	\set Staff.instrumentName = "Huevo"
	\set Staff.shortInstrumentName = "H."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\drummode {

		%\override NoteHead #'stencil = #ly:text-interface::print
		%\override NoteHead #'text = #(markup #:musicglyph "scripts.stopped")

		% [1] intro
		R1*10

		% [2] estrofa 1
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |

		% [3] estrofa 2
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |

		% [4] puente 1
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |

		% [5] coro 1
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |

		% [6] interludio
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |

		% [7] estrofa 3
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |

		% [8] estrofa 4
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |
		r4 mar4 r2 |

		% [9] puente 2
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |
		r4 mar4 r4 mar4 |

		% [10] coro 2
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |

		% [11] coro 3
		mar1^^ |
		R1 |
		R1 |
		R1 |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |

		% [12] finale
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		mar8 mar8 mar8^^ mar mar8 mar8 mar8^^ mar |
		\bar "|."

	} % drummode
>> % Staff
