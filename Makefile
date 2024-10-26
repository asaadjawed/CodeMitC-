.PHONY: clean All

All:
	@echo "----------Building project:[ codingMitC++ - Debug ]----------"
	@cd "codingMitC++" && "$(MAKE)" -f  "codingMitC++.mk"
clean:
	@echo "----------Cleaning project:[ codingMitC++ - Debug ]----------"
	@cd "codingMitC++" && "$(MAKE)" -f  "codingMitC++.mk" clean
