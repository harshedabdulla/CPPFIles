.PHONY: clean All

All:
	@echo "----------Building project:[ Section6Project - Debug ]----------"
	@cd "Section6Project" && "$(MAKE)" -f  "Section6Project.mk"
clean:
	@echo "----------Cleaning project:[ Section6Project - Debug ]----------"
	@cd "Section6Project" && "$(MAKE)" -f  "Section6Project.mk" clean
